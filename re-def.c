

typedef unsigned int uint32_t;
#define frontward (11011)
#define leftward (10111)
#define rightward (11101)
#define invalid_direction (101010)
#define pin0 0
#define pin1 1
#define pin2 2
#define pin3 3
#define pin4 4
#define pin5 5
#define pin6 6
#define pin7 7
#define pin8 5

void set_input_pin(uint32_t pinout){
    
}
void set_output_pin(uint32_t pinout){
    
}

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