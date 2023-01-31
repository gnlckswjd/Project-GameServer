#include "pch.h"
#include "RoomManager.h"
#include "Room.h"
#include "User.h"

Room* RoomManager::MakeRoom(unsigned roomID)
{

    Room* room = new Room(roomID);
    //필요시 여기에서 UserID 입력
    LOCK_GUARD
    _rooms[roomID] = room;
    return room;
}

Room* RoomManager::GetRoomByRoomID(unsigned roomID)
{
    LOCK_GUARD
    auto it=_rooms.find(roomID);
    if(it!=_rooms.end())
    {
        return it->second;
    }
    return nullptr;
}

void RoomManager::DeleteRoom(Room* room)
{
    if (room == nullptr)
        return;
    delete room;
    room = nullptr;
}
