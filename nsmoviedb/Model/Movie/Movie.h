//
//  Movie.h
//  nsmoviedb
//
//  Created by Jobe Diego Dylbas dos Santos on 16/03/20.
//  Copyright © 2020 Jobe Diego Dylbas dos Santos. All rights reserved.
//

#ifndef Movie_h
#define Movie_h

@interface Movie : NSObject

@property (strong, nonatomic) NSData *poster;
@property (nonatomic) NSNumber *tmdbId;
@property (nonatomic) NSString *posterPath;
@property (strong, nonatomic) NSString *title;
@property (nonatomic, copy, readwrite) NSString *overview;
@property (strong, nonatomic) NSMutableArray *categoriesIds;
@property (nonatomic) NSNumber *score;
@property (strong, nonatomic) NSMutableArray *categories;
@end

#endif /* Movie_h */
