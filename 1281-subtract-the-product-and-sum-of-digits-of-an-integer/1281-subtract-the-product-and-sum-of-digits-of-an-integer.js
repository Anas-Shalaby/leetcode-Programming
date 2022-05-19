/**
 * @param {number} n
 * @return {number}
 */
var subtractProductAndSum = function(n) {
    let product = 1;
    let sum =0;
    let number = n.toString();
    for (let i = 0 ;i < number.length ; i++)
        {
            product *= Number(number[i]);
            sum +=Number(number[i]);
        }
    return product - sum;
};