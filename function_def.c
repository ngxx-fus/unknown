

typedef unsigned int uint32_t;
#define frontward (11011)
#define leftward (10111)
#define rightward (11101)
#define invalid_direction (101010)


void turnon(uint32_t pinout, uint32_t state){

}

void turnoff(uint32_t pinout, uint32_t state){

}

void forward(uint32_t time_){
    
}

void turn_left(uint32_t time_){

}

void turn_right(uint32_t time_){
    
}

uint32_t is_wall(uint32_t direction){
    switch (direction)
    {
    case frontward:
        /* code */
        break;
    case leftward:
        /* code */
        break;
    case rightward:
        /* code */
        break;
    }
    return invalid_direction;
}