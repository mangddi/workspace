package com.example.practice

fun main(){
    //1.배열
    var arr1 = listOf("1","2") // 수정 불가능
    var arr2 = mutableListOf("1","2")//수정 가능

    arr2.add("3")// 가능
    //arr1.add("3") 불가능


    //2. loop 반복문
    for(item in arr1){
        println(item)
    }// 아이템은 그냥 변수명 다른걸로 넣어줘도 상관이 없다.
    for((index, item) in arr1.withIndex()){
        println("$index, $item")
    }// 인덱스도 같이 출력, 함수가 지멋대로다... 대문자 소문자 어휴//이 구문을 자주 쓸것이다.


    //3. 캐스팅 (가볍게) casting object <- string, int, long......// Any - auto casting

    var hello: Any = "hello"// Any지만 String 이다

    if(hello is String){
        var str: String = hello

    }



}