//
//  Round.h
//  Thatso
//
//  Created by John  Seubert on 11/19/14.
//  Copyright (c) 2014 John Seubert. All rights reserved.
//

#import <Parse/Parse.h>

@interface Round : PFObject<PFSubclassing>
@property (retain) NSString *judge;
@property (retain) NSString *subject;
@property (retain) NSString *category;
@property (retain) NSNumber *roundNumber;
+ (NSString *)parseClassName;
@end

