//
//  Game.m
//  Coryat-ObjC
//
//  Created by Michael Frain on 2/7/15.
//  Copyright (c) 2015 Michael Frain. All rights reserved.
//

#import "Game.h"
#import "Clue.h"


@implementation Game

@dynamic correctResponses;
@dynamic finalResponseCorrect;
@dynamic gameDate;
@dynamic gameIndex;
@dynamic gameType;
@dynamic incorrectResponses;
@dynamic noResponses;
@dynamic score;
@dynamic trashCorrect;
@dynamic trashScore;
@dynamic clues;

+ (Game *)createGame:(NSManagedObjectContext *)context {
    Game *newGame = (Game *)[NSEntityDescription insertNewObjectForEntityForName:@"Game" inManagedObjectContext:context];
    NSArray *oldGames = [Game readAllGames:context];
    newGame.gameIndex = @(oldGames.count);
    return newGame;
}

+ (NSArray *)readAllGames:(NSManagedObjectContext *)context {
    NSFetchRequest *fetchRequest = [[NSFetchRequest alloc] initWithEntityName:@"Game"];
    
    NSSortDescriptor *sortDescriptor = [NSSortDescriptor sortDescriptorWithKey:@"gameIndex" ascending:YES];
    fetchRequest.sortDescriptors = @[sortDescriptor];
    
    NSError *error = [NSError new];
    NSArray *gameArray = [context executeFetchRequest:fetchRequest error:&error];
    return gameArray;
}

@end
