package com.nicolaspetras

/**
 * This function searches for a target in an array, returning the index it is found at or -1 if it is not found.
 */
fun linearSearch(array: IntArray, target: Int): Int {
    for (i in array.indices) {
        if (array[i] == target) {
            return i
        }
    }
    return -1
}