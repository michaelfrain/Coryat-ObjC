//
//  Game.h
//  Coryat-ObjC
//
//  Created by Michael Frain on 2/7/15.
//  Copyright (c) 2015 Michael Frain. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <CoreData/CoreData.h>

@class Clue;

@interface Game : NSManagedObject

@property (nonatomic, retain) NSNumber * correctResponses;
@property (nonatomic, retain) NSNumber * finalResponseCorrect;
@property (nonatomic, retain) NSDate * gameDate;
@property (nonatomic, retain) NSNumber * gameIndex;
@property (nonatomic, retain) NSNumber * gameType;
@property (nonatomic, retain) NSNumber * incorrectResponses;
@property (nonatomic, retain) NSNumber * noResponses;
@property (nonatomic, retain) NSNumber * score;
@property (nonatomic, retain) NSNumber * trashCorrect;
@property (nonatomic, retain) NSNumber * trashScore;
@property (nonatomic, retain) NSOrderedSet *clues;

+ (Game *)createGame:(NSManagedObjectContext *)context;
+ (NSArray *)readAllGames:(NSManagedObjectContext *)context;

@end

@interface Game (CoreDataGeneratedAccessors)

- (void)insertObject:(Clue *)value inCluesAtIndex:(NSUInteger)idx;
- (void)removeObjectFromCluesAtIndex:(NSUInteger)idx;
- (void)insertClues:(NSArray *)value atIndexes:(NSIndexSet *)indexes;
- (void)removeCluesAtIndexes:(NSIndexSet *)indexes;
- (void)replaceObjectInCluesAtIndex:(NSUInteger)idx withObject:(Clue *)value;
- (void)replaceCluesAtIndexes:(NSIndexSet *)indexes withClues:(NSArray *)values;
- (void)addCluesObject:(Clue *)value;
- (void)removeCluesObject:(Clue *)value;
- (void)addClues:(NSOrderedSet *)values;
- (void)removeClues:(NSOrderedSet *)values;
@end
