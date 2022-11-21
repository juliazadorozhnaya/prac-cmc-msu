#ifndef SESSIONORGANIZER_H
#define SESSIONORGANIZER_H

#include <string>
#include <iostream>
#include <fstream>
#include <vector>

#include "Track.h"
#include "Session.h"
#include "Conference.h"

using namespace std;

/**
 * SessionOrganizer ��������� ������� ����� � ������������ �� �� ����������� */
class SessionOrganizer
{
  private:
    double **distanceMatrix;

    int parallelTracks;
    int worksInSession;
    int sessionsInTrack;

    Processor *processor;

    double processingTimeInMinutes;
    double tradeoffCoefficient; // the tradeoff coefficient

  public:
    SessionOrganizer();
    SessionOrganizer(string filename);    void readInInputFile(string filename);

    /**
     * ������������� ����� �� �����������
     */
    void organizeworks();    
      
      double **getDistanceMatrix();

      double scoreOrganization();

    void printSessionOrganiser(char *);
};

#endif /* SESSIONORGANIZER_H */

