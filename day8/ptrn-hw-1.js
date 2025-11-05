let n = 5;

for(let i = 0; i< n; i++) {
    let str = " ";
    for(let sp=0; sp <= n - i; sp++) {
        str = str + "  ";
    }
    for(let j = 0; j<n; j++) {
        if ( i == 0 || i == n - 1 ||  j == 0 || j == n-1) {
            str = str + "  ";
        } else {
            str = str + "* ";
        }
    }
    console.log(str);
}