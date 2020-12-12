#!/usr/bin/python3

def canUnlockAll(boxes):
    "Return true if a box is all boxes can be opened else false"
    #if len(boxes) == 1:
    #    return True
    keys = [0]
    for key in keys:
        #box = boxes[k]
        for pos in boxes[key]:
            if pos not in keys and pos < len(boxes):
                keys.append(pos)
    
    #keys = [pos for key in keys for pos in boxes[key] if pos not in keys and pos < len(boxes)]
    if len(boxes) is len(keys):
        return True
    else:
        return False
    
    #for key in range(1, len(boxes) + 1):
    #    for box in boxes:
    #        if keyq in box:
    #            return False

    #return True
