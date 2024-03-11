function mul2(n) {
    return n*2;
}

function make_handler(sp,inp) {
    return function(){
        sp.innerHTML = mul2(inp.value)
    };
}