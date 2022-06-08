#ifndef C15_HEADER_H
#define C15_HEADER_H

//Definition of class pattern
class pattern
{
    //Private variables of the pattern class can be accessed by member functions of the pattern class
    private:
        int userNum;
        int placeHolder;
        int placeHolder2;

    //Public member functions can access private variables of the pattern class
    public:
        //Setter, getter, and update functions access and mutate the userNum private variable of the pattern class
        void setUserNum();
        int getUserNum() const;
        void updateUserNum();

        //Setter, getter, and update functions access and mutate the placeHolder private variable of the pattern class
        void setPlaceHolder();
        int getPlaceHolder() const;
        void updatePlaceHolder();

        //Setter, getter, and update functions access and mutate the placeHolder2 private variable of the pattern class
        void setPlaceHolder2();
        int getPlaceHolder2() const;
        void updatePlaceHolder2();

        //The print() function displays resulting pattern to the user
        void print();

        //Class constructor
        pattern();

};


#endif // C15_HEADER_H
