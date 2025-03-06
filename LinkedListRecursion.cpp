
/*Pseudocode for searching data value in a linked list*/

bool searchElem(node, data) :
    if node is null :
return false
    else if node.data == data :
        return true
    else :
        return searchElem(node.next, data)