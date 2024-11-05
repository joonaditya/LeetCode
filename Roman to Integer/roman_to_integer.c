int roman(char* i){
    switch(*i){
        case 'I': return 1;
        case 'V': return 5;
        case 'X': return 10;
        case 'L': return 50;
        case 'C': return 100;
        case 'D': return 500;
        case 'M': return 1000;
        default: return 0;
    }
}

int romanToInt(char* s) {
    int len = strlen(s);
    int result = 0;
    int previous = 0;

    for(int i = len-1; i >= 0; i--){
        int r = roman(s+i);
        if (r < previous)
            result -= r;
        else
            result += r;
        previous = r;
    }
    return result;
}