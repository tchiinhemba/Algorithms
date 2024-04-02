/**
 * 
 * Binary Search Algorithm
 * 
 * @param {list} -  List of elements
 * @param {item} - Item that you need to find
 * @returns {number} - The index of the element you are looking for.
 */


// The Algorithm

function binarySerch(list, item) {

    let lowest = 0;
    let highest = list.length - 1;
    let middle;
    let response;

    while (lowest <= highest) {

        middle = Math.floor((lowest + highest) / 2);
        response = list[middle];

        if (response == item) {
            return middle;
        }

        if (response > item) {
            highest = middle - 1;
        } else {
            lowest = middle + 1;
        }
    }
    return -1;
}



/**
 * To run the algo, we need a list.
 * Below I created a list of 100 numeric elements
 */
let list = Array.from({ length: 100 }, (_, index) => index + 1);


let indexOfElement = binarySerch(list, 37);

console.log(indexOfElement);