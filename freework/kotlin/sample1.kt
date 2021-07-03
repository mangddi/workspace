package com.example.practice

fun main() {
    //1.기초
    val hello1: String = "hello world" //final 상수 바꿀수 없는 값
    var hello2: String = "hello world" //int string, float, double 바꿀수 있는 값
    var hello3: String? = "world3" //?를 써준다면 널을 넣을 수 있고 ?이 없다면 넣을 수 없다.
    val a = 3


    println(hello1)
    println(hello())


    //hello1 = "123" // 바꿀 수 없다! val이기 때문
    //hello2 = "123" // 바꿀 수 있다! var이기 때문

}

fun hello(): String {//void

    return "hello fun!"
}


