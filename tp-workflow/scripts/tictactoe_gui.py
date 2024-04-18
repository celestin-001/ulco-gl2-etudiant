import gi
import math
import tictactoe 

gi.require_version("Gtk", "3.0")
from gi.repository import Gtk, Gdk

class Gui(Gtk.Window):

    Rouge = 1
    Vert =2
    Vide =0
    
    def __init__(self):
        super().__init__(title="Tictactoe")
        self.set_size_request (400, 400)

        # main vertical box : drawing area + hbox (label, button1, button2)
        vbox = Gtk.Box(orientation=Gtk.Orientation.VERTICAL)
        self.add(vbox)

        # drawing area
        self.drawingarea = Gtk.DrawingArea()
        self.drawingarea.add_events(Gdk.EventMask.BUTTON_PRESS_MASK)
        self.drawingarea.connect("draw", self.on_draw)
        self.drawingarea.connect("button-press-event", self.on_area_button_press)
        vbox.pack_start(self.drawingarea, True, True, 0)

        # horizontal box
        hbox = Gtk.Box()
        vbox.pack_end(hbox, False, False, 0)
        # label
        self.label = Gtk.Label(label="TODO")
        hbox.pack_start(self.label, True, True, 0)
        
        button1 = Gtk.Button(label="Rejouer")
        button1.connect("clicked", self.on_button1_clicked)
        hbox.pack_start(button1, True, True, 0)
        # button2
        button2 = Gtk.Button(label="quitter")
        button2.connect("clicked", self.on_button2_clicked)
        hbox.pack_start(button2, True, True, 0)

        # TODO create game (from the C++ module)
        self.jeu = tictactoe.Jeu()

    def on_draw(self, widget, context):

        # TODO on_draw
        
        width = widget.get_allocated_width()
        height = widget.get_allocated_height()

        cell_width = width/3
        cell_height = height/3

        context.set_source_rgb(0, 0, 0)
        context.rectangle(1, 1, cell_width, cell_height)
        context.fill()

        

        

        for i in range(1,3):

            

            #lignes horizontales
            
            context.set_line_width(3)
            context.move_to(cell_height*i,0)
            context.line_to(cell_height*i,height)
            context.stroke()
            context.move_to(0, cell_width*i)
            context.line_to(width, cell_width*i)

        context.stroke()
        context.set_line_width(3)
        context.set_source_rgb(0,0, 0)

        for i in range(3):
            for j in range(3):
                cell_status = self.jeu.getCell(i,j)
                if cell_status==Gui.Rouge:
                    self.draw_cross(context,i*cell_width, j*cell_height,cell_width,cell_height)
                elif cell_status==Gui.Vert:
                    self.draw_circle(context,i*cell_width, j*cell_height,cell_width,cell_height)

    def draw_cross(self,context,x,y,width,height):
        context.set_source_rgb(1, 0, 0)  # Couleur rouge pour le joueur Rouge
        context.set_line_width(2)
        context.move_to(x + width * 0.2, y + height * 0.2)
        context.line_to(x + width * 0.8, y + height * 0.8)
        context.move_to(x + width * 0.8, y + height * 0.2)
        context.line_to(x + width * 0.2, y + height * 0.8)
        context.stroke()

    def draw_circle(self, context, x, y, width, height):
        # Dessine un cercle dans la case spécifiée
        context.set_source_rgb(0, 1, 0)  # Couleur verte pour le joueur Vert
        context.set_line_width(2)
        context.arc(x + width / 2, y + height / 2, min(width, height) * 0.4, 0, 2 * math.pi)
        context.stroke()



    def on_area_button_press(self, widget, event):
        # TODO on_area_button_press
        if event.button == 1:
            print('TODO on_area_button_press')
            

    def on_button1_clicked(self, widget):
        # TODO on_button1_clicked
        print('TODO on_button1_clicked')
        self.drawingarea.queue_draw()

    def on_button2_clicked(self, widget):
        Gtk.main_quit()

if __name__ == '__main__':
    gui = Gui()
    gui.connect("destroy", Gtk.main_quit)
    gui.show_all()
    Gtk.main()

