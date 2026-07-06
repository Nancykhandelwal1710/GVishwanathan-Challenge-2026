int countingValleys(int steps, string path) {

    int level = 0;
    int valleys = 0;

    for(char ch : path) {

        if(ch == 'U')
            level++;
        else
            level--;

        if(level == 0 && ch == 'U')
            valleys++;
    }

    return valleys;
}