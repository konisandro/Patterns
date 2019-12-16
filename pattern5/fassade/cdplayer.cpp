#include "cdplayer.h"

CdPlayer::CdPlayer(QString description, Amplifier *amplifier)
{
    this->description = description;
    this->amplifier = amplifier;
}

void CdPlayer::on() {
    cout << description.toStdString() << " on" << endl;
}

void CdPlayer::off() {
    cout << description.toStdString() << " off" << endl;
}

void CdPlayer::eject() {
    title = nullptr;
    cout << description.toStdString() << " eject" << endl;
}

void CdPlayer::play(QString title) {
    this->title = title;
    currentTrack = 0;
    cout << description.toStdString() << " playing \"" << title.toStdString() << "\"" << endl;
}

void CdPlayer::play(int track) {
    if (title == nullptr) {
        cout << description.toStdString() <<  "can't play track " << currentTrack << ", no cd inserted" << endl;
    }
    else {
        currentTrack = track;
        cout << description.toStdString() << " playing track " << currentTrack << endl;
    }
}

void CdPlayer::stop() {
    currentTrack = 0;
    cout << description.toStdString() << " stopped" << endl;
}

void CdPlayer::pause() {
    cout << description.toStdString() << " paused \"" << title.toStdString() << "\"" << endl;
}

QString CdPlayer::toString() {
    return description;
}
