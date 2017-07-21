/***********************************************************
 * Author:                       Romano Garza
 * Date Created:                 07/21/17
 * Last Modification Date:       07/21/17
 * Filename:                     linkedList.c
 *
 * Overview:
 *   This file contains the function definitions for a program
 *   that creates and modifies a linked list
 *
 *
 * Input:
 *   No input is required.
 *
 * Output:
 *   No output
 ************************************************************/

#include "linkedList.h"
#include <assert.h>
#include <stdlib.h>
#include <stdio.h>

// Double link
struct Link
{
	TYPE value;
	struct Link* next;
	struct Link* prev;
};

// Double linked list with front and back sentinels
struct LinkedList
{
	int size;
	struct Link* frontSentinel;
	struct Link* backSentinel;
};



/***********************************************************
* Entry:    no entry is is requrired
*
* Exit:     nothing returned
*
* Purpose:  allocates the list's sentinel and sets the size 
*           the sentinels' next and prev should point to 
*           each other or NULL as appropriate.
************************************************************/
static void init(struct LinkedList* list) {
	// malloc both sentinels
    list->frontSentinel = malloc(sizeof(struct Link));
    list->backSentinel = malloc(sizeof(struct Link));
    
    // assert malloc occured properly
    assert(list->frontSentinel!=0);
    assert(list->backSentinel!=0);
    
    // set front and back pointing to each other
    // with front's previous pointing to null
    // and back's next pointing to null 
    list->frontSentinel->next = list->backSentinel;
    list->backSentinel->prev = list->frontSentinel;
    list->size = 0;
    
}



/***********************************************************
* Entry:    no entry is is requrired
*
* Exit:     nothing returned
*
* Purpose:  adds a new link with the given value before the 
*           given link and increments the list's size
************************************************************/
static void addLinkBefore(struct LinkedList* list, struct Link* link, TYPE value){
    
    // assert list and link are not null
    assert(list && link);
    
    // malloc room for new link
    struct Link* new = malloc(sizeof(struct Link));
    assert(new!=0);
    // assign value to new link
    new->value = value;
    
    // store old link previous in temp
    struct Link* temp = link->prev;
    
    // position new link before old link
    new->prev = temp;
    new->next = link;
    link->prev = new;
    temp->next = new;
    
    // incremenet size
    list->size++;
}

/**
 * Removes the given link from the list and
 * decrements the list's size.
 */

/***********************************************************
* Entry:    no entry is is requrired
*
* Exit:     returns a pointer to 10 students
*
* Purpose:  allocates the list's sentinel and sets the size
*           the sentinels' next and prev should point to
*           each other or NULL as appropriate.
************************************************************/
static void removeLink(struct LinkedList* list, struct Link* link)
{
	// FIXME: you must write this
}

/**
 * Allocates and initializes a list.
 */
struct LinkedList* linkedListCreate()
{
	struct LinkedList* newDeque = malloc(sizeof(struct LinkedList));
	init(newDeque);
	return newDeque;
}

/**
 * Deallocates every link in the list including the sentinels,
 * and frees the list itself.
 */
void linkedListDestroy(struct LinkedList* list)
{
	while (!linkedListIsEmpty(list))
	{
		linkedListRemoveFront(list);
	}
	free(list->frontSentinel);
	free(list->backSentinel);
	free(list);
}

/**
 * Adds a new link with the given value to the front of the deque.
 */
void linkedListAddFront(struct LinkedList* list, TYPE value)
{
	// FIXME: you must write this
}

/**
 * Adds a new link with the given value to the back of the deque.
 */
void linkedListAddBack(struct LinkedList* list, TYPE value)
{
	// FIXME: you must write this
}

/**
 * Returns the value of the link at the front of the deque.
 */
TYPE linkedListFront(struct LinkedList* list)
{
	// FIXME: you must write this
}

/**
 * Returns the value of the link at the back of the deque.
 */
TYPE linkedListBack(struct LinkedList* list)
{
	// FIXME: you must write this
}

/**
 * Removes the link at the front of the deque.
 */
void linkedListRemoveFront(struct LinkedList* list)
{
	// FIXME: you must write this
}

/**
 * Removes the link at the back of the deque.
 */
void linkedListRemoveBack(struct LinkedList* list)
{
	// FIXME: you must write this
}

/**
 * Returns 1 if the deque is empty and 0 otherwise.
 */
int linkedListIsEmpty(struct LinkedList* list)
{
	// FIXME: you must write this
}

/**
 * Prints the values of the links in the deque from front to back.
 */
void linkedListPrint(struct LinkedList* list)
{
	// FIXME: you must write this
}

/**
 * Adds a link with the given value to the bag.
 */
void linkedListAdd(struct LinkedList* list, TYPE value)
{
	// FIXME: you must write this
}

/**
 * Returns 1 if a link with the value is in the bag and 0 otherwise.
 */
int linkedListContains(struct LinkedList* list, TYPE value)
{
	// FIXME: you must write this
}

/**
 * Removes the first occurrence of a link with the given value.
 */
void linkedListRemove(struct LinkedList* list, TYPE value)
{
	// FIXME: you must write this
}
