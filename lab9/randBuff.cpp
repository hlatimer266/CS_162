/**************************************************************
 * * Author: Harrison Latimer
 * * Date: 11/26/2017
 * Description: Implementaiton file for randBuff function
 **************************************************************/
#include<iostream>
#include"randBuff.h"
#include<random>
#include <chrono>
#include<queue>

void randBuff(std::queue<int> &MyQueue, int perFront, int perBack){

    std::queue<int>temp;
    unsigned seed = std::chrono::system_clock::now().time_since_epoch().count();
    std::default_random_engine generator(seed);

    std::uniform_int_distribution<int> randomInt(1, 1000);
    std::uniform_int_distribution<int> randomIntFront(1,100);
    std::uniform_int_distribution<int> randomIntBack(1,100);

    int N = randomInt(generator);
    int front = randomIntFront(generator);
    int back = randomIntBack(generator);

    if (front <= perFront ){
        MyQueue.push(N);

    }
    else if (!MyQueue.empty() && back <= perBack){
        MyQueue.pop();

    }




}
