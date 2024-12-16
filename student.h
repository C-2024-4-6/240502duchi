class Student {
public:
    Student(int n = 0, const char* nm = "", char s = '\0'); 
    void display(); 
    void set_value(int n, const char* nm, char s); 

private:
    int num;
    char name[20];
    char sex;
};


