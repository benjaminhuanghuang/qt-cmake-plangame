#ifndef PLAYER_H
#define PLAYER_H

#include <QGraphicsScene>
#include <QGraphicsRectItem>
#include <QGraphicsView>
#include <QObject>
#include <QMediaPlayer>

class Player : public QObject, public QGraphicsPixmapItem
{
  Q_OBJECT
public:
  Player(QGraphicsItem *parent = 0);
  void keyPressEvent(QKeyEvent *event);

public slots:
  void spawn();

private:
  QMediaPlayer *bulletsound;
};

#endif // MYRECT_H