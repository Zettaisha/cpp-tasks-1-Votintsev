#include "Include.h"

using namespace std;

int main()
{
    cout << ("----#8 DRAW PIXEL----") << endl;
    Pixel pixelToDraw;
    pixelToDraw.SetX(50);
    pixelToDraw.SetY(40);
    pixelToDraw.Draw();
    this_thread::sleep_for(chrono::seconds(5));
    cout << endl;



    cout << ("----#1 DATETIME----") << endl;
    DateTime* time1 = new DateTime();

    if (time1->Read("INPUT VALUES")) {
        time1->PrintDate();
    }
    else
        return 0;

    cout << endl;

    time1->AddDays(1);
    time1->AddMonths(1);
    time1->AddYears(2);

    cout << endl;

    if (time1->CheckValid(time1->GetDay(), time1->GetMonth(), time1->GetYear(), time1->GetHour(), time1->GetMinute())) {
        time1->PrintDate();
    }
    else
        return 0;

    cout << endl;

    time1->IsLeapYear();

    cout << endl;

    cout << "Month of year: ";
    time1->MonthOfYear();

    delete time1;
    cout << endl;




    cout << ("----#2 PIXEL----") << endl;
    Pixel a;
    Pixel* b = new Pixel();

    a.SetColor("Green");

    a.Move(4, 6);

    b->Read("INPUT VALUES");
    cout << "Dist from "; b->Print();
    cout << " to "; a.Print();
    cout << " is " << b->Dist(a) << endl;

    delete b;
    cout << endl;



    cout << ("----#3 LINE----") << endl;
    Line* line = new Line();

    line->Read("INPUT VALUES");
    line->Print();
    cout << "Length: " << line->Length() << endl;
    line->Center();
    cout << endl;



    cout << ("----#5 POINT IN LINE----") << endl;
    line->CheckPoint(3, 4);
    delete line;
    cout << endl;




    cout << ("----#6 TRIANGLE----") << endl;

    Triangle* triangle = new Triangle();

    triangle->Read("INPUT VALUES");
    triangle->Print();
    triangle->Move(6, 6, 6, 4, 4, 4);
    cout << "Perimeter: " << triangle->Perimeter() << endl;
    cout << "Area: " << triangle->Area() << endl;
    triangle->Center();

    delete triangle;
    cout << endl;


    cout << ("----#9 TIMER----") << endl;
    Timer* timer = new Timer;
    int seconds;
    cout << "Input interval in seconds: ";
    cin >> seconds;
    cout << endl;
    timer->SetInterval(seconds);
    timer->Start();
    delete timer;
    cout << endl;
}