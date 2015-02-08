//
//  Clue.h
//  Coryat-ObjC
//
//  Created by Michael Frain on 2/7/15.
//  Copyright (c) 2015 Michael Frain. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <CoreData/CoreData.h>


@interface Clue : NSManagedObject

@property (nonatomic, retain) NSNumber * result;
@property (nonatomic, retain) NSNumber * selectionOrder;
@property (nonatomic, retain) NSNumber * value;
@property (nonatomic, retain) NSManagedObject *game;

@end
