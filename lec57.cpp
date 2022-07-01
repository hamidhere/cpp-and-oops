#include <iostream>
#include <cstring>
using namespace std; // virtual functions are not static.
                     // acessible with the help of pointers.
                     // they can be a friend of an other.
                     // it might or might not be used in base class.
                     
class FAC
{
protected:
    string title;
    float rating;

public:
    FAC(string t, float r)
    {
        title = t;
        rating = r;
    }
    virtual void display() {}
};
class FACVideo : public FAC
{
    float videoLength;

public:
    FACVideo(string t, float r, float vl) : FAC(t, r)
    {
        videoLength = vl;
    }
    void display()
    {
        cout << "Title of the lecture is: " << title << endl;
        cout << "Rating of the video is:" << rating << "/5" << endl;
        cout << "Video length is:" <<videoLength<<endl;
    }
};
class FACsite : public FAC
{
    int words;

public:
    FACsite(string t, float r, int w) : FAC(t, r)
    {
        words = w;
    }
    void display()
    {
        cout << "Title of the article: "<<title<<endl;
        cout << "Number of words: " << words << endl;
        cout << "Rating of the article is: " << rating << "/5" << endl;
    }
};

int main()
{
    string title;
    float rating,videolength;
    int  words;
    // For YT Channel
    title = "How to download from fileAC";
    rating=4.83;
    videolength = 8.45;
    FACVideo Video(title,rating,videolength);
    // Video.display();
    //  FACVideo Video("How to download from fileAC",4.83,8.45);
    // Video.display();
    cout<<"\n*********************\n"<<endl;
    // for Website
    title = "Adobe Photosop ";
    rating=3.2;
    words = 655;
    // FACsite Article("Adobe Photosop ",3.2,655);
     FACsite Article(title,rating,words);
    // Article.display();
    FAC* objs[2];
    objs[0] = & Video;
    objs[1] = & Article;
    objs[0]->display();
    cout<<"\n*********************\n"<<endl;
    objs[1]->display();


    return 0;
}