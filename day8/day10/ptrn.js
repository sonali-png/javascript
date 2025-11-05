let n = 5;
for(let i = 0; i < n; i++) {
    let sp = " ";
    for(let j = 0; j <= i; j++) {
        if((i + j) % 2 == 0) {
            sp += " 0 "; 
        } else {
            sp += " 1 "; 
        }
    }
    console.log(sp);
}
