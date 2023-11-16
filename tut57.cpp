#include <iostream>
using namespace std;

class CWH
{
protected:
    string title;
    float rating;

public:
    CWH(string s, float r)
    {
        title = s;
        rating = r;
    }

    virtual void Display() {}
};

class CWHvideo : public CWH
{
    float videolen;

public:
    CWHvideo(string s, float r, float vl) : CWH(s, r)
    {
        videolen = vl;
    }

    void Display()
    {
        cout << "The title of CWHvideo is " << title <<"."<< endl;
        cout << "The rating of video is " << rating << " out of 5 star. " << endl;
        cout << "The length of video is " << videolen << " minutes." << endl<<endl;
    }
};

class CWHtext : public CWH
{
    int wordlen;

public:
    CWHtext(string s, float r, int wl) : CWH(s, r)
    {
        wordlen = wl;
    }

    void Display()
    {
        cout << "The title of CWHvideo is " << title <<"."<< endl;
        cout << "The rating of video is " << rating << " out of 5 star. " << endl;
        cout << "The no. of words in given text is: " << wordlen << " words. " << endl;
    }
};

int main()
{
    string title;
    float r, vl;
    int wl;

    //For cwh video
    title = "Harry tutorial";
    r = 4.5;
    vl = 5.0;
    CWHvideo cv(title, r, vl);

    //For cwh text
    title = "Harry tutorial";
    r = 4.98;
    wl = 100;
    CWHtext ct(title, r, wl);

    CWH *tuts[2];
    tuts[0] = &cv;
    tuts[1] = &ct;

    tuts[0]->Display();
    tuts[1]->Display();

    return 0;
}