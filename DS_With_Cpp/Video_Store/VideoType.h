//
// Created by redbend on 10/09/2019.
//
/*
 * During holidays or on weekends, a family or an individual typically rents a movie either
 * from a local store or online. Therefore, we write a program that does the following:
1. Rent a video; that is, check out a video.
2. Return, or check in, a video.
3. Create a list of videos owned by the store.
4. Show the details of a particular video.
5. Print a list of all the videos in the store.
6. Check whether a particular video is in the store.
7. Maintain a customer database.
8. Print a list of all the videos rented by each customer
 * */

// Video Object :
/*
 * 1. Name of the Movie
 * 2. Name of the Stores
 * 3. Name of the producer
 * 4. Name of the Director
 * 5. Name of the producing Company
 * 6. Number of copies in Store
 /***********************************  Operation to be perfomred on the video Object    ***********************/
/*1. Set the Video Information : title, Start, Production Company and so on
 * 2. Show the details of the particular video
 * 3. Check the number of copies
 * 4. Checkout the video
 * 5. CheckIn the Video
 * 6. Check Availability
 * */


#ifndef VIDEO_STORE_VIDEOTYPE_H
#define VIDEO_STORE_VIDEOTYPE_H
//
// Created by redbend on 10/09/2019.
//
#include <iostream>
#include <string>
using namespace std;


class videoType{
private:
    friend ostream& operator <<(ostream&, const videoType&);
    string videoTitle; //variable to store the name of the movie
    string movieStar1; //variable to store the name of the star
    string movieStar2; //variable to store the name of the star
    string movieProducer; //variable to store the name of the
//producer
    string movieDirector; //variable to store the name of the
//director
    string movieProductionCo; //variable to store the name
//of the production company
    int copiesInStock;
public:
    void setVideoInfo(string title, string star1,
                      string star2, string producer,
                      string director, string productionCo,
                      int setInStock);

    int getNoOfCopiesInStock() const;
    void checkOut();
    void checkIn();
    void printTitle() const;
    bool checkTitle(string title);
    void updateInStock(int num);
//Function to increment the number of copies in stock by
//adding the value of the parameter num.
//Postcondition: copiesInStock = copiesInStock + num;


    void setCopiesInStock(int num);
//Function to set the number of copies in stock.
//Postcondition: copiesInStock = num;

    string getTitle() const;
    videoType(string title = "", string star1 = "",
              string star2 = "", string producer = "",
              string director = "", string productionCo = "",
              int setInStock = 0);
    bool operator==(const videoType&) const;
    bool operator!=(const videoType&) const;
    void printInfo() const;

};
void videoType::setVideoInfo(string title, string star1, string star2, string producer, string director,
                             string productionCo, int setInStock) {
    int copiesInStock;
    videoTitle=title;
    movieStar1=star1;
    movieStar2=star2;
    movieProducer=producer;
    movieDirector=director;
    movieProductionCo=productionCo;
    copiesInStock=setInStock;
}
#endif //VIDEO_STORE_VIDEOTYPE_H
void videoType::checkOut() {
    if(getNoOfCopiesInStock() > 0 ){
        copiesInStock--;
    }else{
        cout<< "Out Of stock"<<endl;
    }
}

void videoType::checkIn() {
    copiesInStock++;
}
int videoType::getNoOfCopiesInStock() const {
    return copiesInStock;
}
void videoType::printTitle() const {
    cout << "videoTitle :: " << videoTitle <<endl;
 }

 void videoType::printInfo() const{
     cout << "Video Title: " << videoTitle << endl;
     cout << "Stars: " << movieStar1 << " and "
          << movieStar2 << endl;
     cout << "Producer: " << movieProducer << endl;
     cout << "Director: " << movieDirector << endl;
     cout << "Production Company: " << movieProductionCo << endl;
     cout << "Copies in stock: " << copiesInStock << endl;
}
bool videoType::checkTitle(string title) {
    return (videoTitle==title);
}
void videoType::updateInStock(int num) {
    copiesInStock += num;
}
void videoType::setCopiesInStock(int num) {
    copiesInStock=num;
}
string videoType::getTitle() const {
    return videoTitle;
}

videoType::videoType(string title, string star1,
                     string star2, string producer,
                     string director,
                     string productionCo, int setInStock)
{
    setVideoInfo(title, star1, star2, producer, director,
                 productionCo, setInStock);
}
bool videoType::operator==(const videoType &right) const {
    return(videoTitle==right.videoTitle);
}
bool videoType::operator!=(const videoType& other) const
{
    return (videoTitle != other.videoTitle);
}

ostream& operator<< (ostream& osObject, const videoType& video)
{
    osObject << endl;
    osObject << "Video Title: " << video.videoTitle << endl;
    osObject << "Stars: " << video.movieStar1 << " and "
             << video.movieStar2 << endl;
    osObject << "Producer: " << video.movieProducer << endl;
    osObject << "Director: " << video.movieDirector << endl;
    osObject << "Production Company: "
             << video.movieProductionCo << endl;
    osObject << "Copies in stock: " << video.copiesInStock
             << endl;
    osObject << "_____________________________________" << endl;
    return osObject;
}

