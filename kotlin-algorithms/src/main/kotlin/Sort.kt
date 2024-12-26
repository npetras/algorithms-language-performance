package com.nicolaspetras

fun bubbleSort(input: IntArray): IntArray {
    val n = input.size
    for (i in 0 until n) {
        for (j in 0 until n - i - 1) {
            if (input[j] > input[j + 1]) {
                val temp = input[j]
                input[j] = input[j + 1]
                input[j + 1] = temp
            }
        }
    }
    return input
}