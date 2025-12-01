function checkEven(num) {
    if(num % 2 == 0) {
        return `Number ${num} is even number`;
    } else {
        return `Number ${num} is odd number`;
    }
}
console.log(checkEven(11));
console.log(checkEven(20));