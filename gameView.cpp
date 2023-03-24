//
// Created by ggn on 17/03/2023.
//


#include "gameView.h"

gameView::gameView(gameModel& model):model(model)
{
}

void gameView::pointsShow()
{
    std::cout<<"Points: "<<"\n"<<model.getPoints()<<"\n";
}

void gameView::update()
{
    system("clear");
    system("/bin/stty -raw");
    std::cout<<"Kliker konsolowy wersja wczesna alpha\n\taby zdobywac punkty, wciskaj spacje.\n\taby zakonczyc, wcisnij ESC"<<"\n";
    pointsShow();
    std::cout<<"Current level: "<<model.getLvl();
    system("/bin/stty raw");
}

int randNr(int a)
{
    srand(time(NULL));
    return std::rand()%a;
}

std::string papajRandTxt(int a=randNr(11))
{
    switch(a)
    {
        case 0:
            return "Jeszcze jak!";
        case 1:
            return "Tak jak Pan Jezus powiedzial!";
        case 2:
            return "A po co mam wybierac, najlepiej zabrac obie!";
        case 3:
            return "Badzmy lagodni!";
        case 4:
            return "Mozna powiedziec ze to jest, jakby to powiedziec... Okrutnik!";
        case 5:
            return "Nie, jak dotad mi nie pokazali!";
        case 6:
            return "Mozna, jak najbardziej!";
        case 7:
            return "Nie.. nie wiem!";
        case 8:
            return "A jak Pan Jezus powiedzial?";
        case 9:
            return "Jak mi dadza to jem!";
        case 10:
            return "Tak sobie...";
        case 20:
            return "Dosc!";
        default:
            return "Z warkoczykami albo bez warkoczykow!";
    }
}

void gameView::papaj()
{
    system("clear");
    system("/bin/stty -raw");
    std::cout<<papajRandTxt()<<"\n";
    std::cout<<"\t~Najwiekszy z Polakow\n\n\n";
    std::cout<<"                 o\n";
    std::cout<<"                  o\n";
    std::cout<<"               0000000000\n";
    std::cout<<"          000000000000000000000\n";
    std::cout<<"       0000zzzzzzzzzzzzzzzzzzz0000\n";
    std::cout<<"     00zz...._________________..z00\n";
    std::cout<<"    0zz...........................zz0\n";
    std::cout<<"   0z........_________________......z0\n";
    std::cout<<"  0........_.................._.......0\n";
    std::cout<<" 0......../.\\................/.\\......0\n";
    std::cout<<" 0.........0..................0........0\n";
    std::cout<<" 0...................\\.................0\n";
    std::cout<<" 0..................__\\................0\n";
    std::cout<<" 0.....................................0\n";
    std::cout<<" 0...............\\....../..............0\n";
    std::cout<<" 0.................\\___/...............0\n";
    std::cout<<" 0.....................................0\n";
    pointsShow();
    system("/bin/stty raw");
}

void waitAndCls(bool dlugo)
{
    if(dlugo)
        for(int i=INT_MIN; i<0; i++)
        {}
    else
        for(int i=INT_MIN/15; i<0; i++)
        {}
    system("clear");
}

void wystrzal()
{
    waitAndCls(false);
    std::cout<<"\t\t\t     BRAWO!\n";
    std::cout<<"\n";
    std::cout<<"\t\t\t     .          \n";
    std::cout<<"\t\t\t    .  . o        \n";
    std::cout<<"\t\t\t   .     .    o   \n";
    std::cout<<"\t\t\t  .        .     \n";
    std::cout<<"\t\t\t .           .     \n";
    std::cout<<"\t\t\t.       .         \n";
    std::cout<<"\t\t\t  .              \n";
    waitAndCls(false);
    std::cout<<"\t\t\t     BRAWO!\n";
    std::cout<<"\t\t\t            o    \n";
    std::cout<<"\t\t\t     .          \n";
    std::cout<<"\t\t\t    .  .  o        o \n";
    std::cout<<"\t\t\t   .     .       \n";
    std::cout<<"\t\t\t  .        .  o    \n";
    std::cout<<"\t\t\t .           .    o  \n";
    std::cout<<"\t\t\t.       .         \n";
    std::cout<<"\t\t\t  .              \n";
    waitAndCls(false);
    std::cout<<"\t\t\t   B R A W O !\n";
    std::cout<<"\t\t\t                 \n";
    std::cout<<"\t\t\t     .      o       o     \n";
    std::cout<<"\t\t\t    .  . o      o        \n";
    std::cout<<"\t\t\t   .     .               o  \n";
    std::cout<<"\t\t\t  .        . o          \n";
    std::cout<<"\t\t\t .           .    o     \n";
    std::cout<<"\t\t\t.       .             \n";
    std::cout<<"\t\t\t  .              \n";
    waitAndCls(false);
    std::cout<<"\t\t\t   B R A W O !\n";
    std::cout<<"\t\t\t                 \n";
    std::cout<<"\t\t\t     .     o            \n";
    std::cout<<"\t\t\t    .  .                o  \n";
    std::cout<<"\t\t\t   .     .  o       o        \n";
    std::cout<<"\t\t\t  .        .                  o \n";
    std::cout<<"\t\t\t .           .     o    \n";
    std::cout<<"\t\t\t.       .             \n";
    std::cout<<"\t\t\t  .              \n";
    waitAndCls(false);
    std::cout<<"\t\t\t     BRAWO!\n";
    std::cout<<"\t\t\t                 \n";
    std::cout<<"\t\t\t     .                 \n";
    std::cout<<"\t\t\t    .  . o       o          \n";
    std::cout<<"\t\t\t   .     .                   o  \n";
    std::cout<<"\t\t\t  .        .   o         o       \n";
    std::cout<<"\t\t\t .           .                \n";
    std::cout<<"\t\t\t.       .          o             o   \n";
    std::cout<<"\t\t\t  .                       o  \n";
    waitAndCls(false);
    std::cout<<"\t\t\t     BRAWO!\n";
    std::cout<<"\n";
    std::cout<<"\t\t\t     .\n";
    std::cout<<"\t\t\t    .  .\n";
    std::cout<<"\t\t\t   .     .\n";
    std::cout<<"\t\t\t  .        .\n";
    std::cout<<"\t\t\t .           .\n";
    std::cout<<"\t\t\t.       .\n";
    std::cout<<"\t\t\t  .\n";
    waitAndCls(false);
}

void gameView::ending()
{
    system("/bin/stty -raw");
    wystrzal();
    std::cout<<std::endl<<papajRandTxt(20)<<"\n\nZdobyles: "<<model.getPoints()<<" punktow."<<"\n\n\n\n\nPS: przegrales w gre";
}