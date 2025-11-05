let n = 5;
for(i = 1; i <= n ; i++) {
    let sp = "  ";
    for(j = 1; j <= n - i; j++) {
        sp = " * ";
    }
    console.log(sp);
}