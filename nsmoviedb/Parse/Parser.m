//
//  Parse.m
//  nsmoviedb
//
//  Created by Jobe Diego Dylbas dos Santos on 17/03/20.
//  Copyright © 2020 Jobe Diego Dylbas dos Santos. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "Parser.h"
#import "Network.h"
#import "Movie.h"

@implementation Parser

+ (NSMutableArray*) parseMovies: (NSDictionary*) response {
    NSMutableArray *movies = [NSMutableArray array];

    for (NSDictionary *movie in response[@"results"]) {
        Movie *_newMovie = Movie.new;
        _newMovie.title = movie[@"original_title"];
        _newMovie.score = movie[@"vote_average"];
        _newMovie.tmdbId = movie[@"id"];
        NSString *desc = movie[@"overview"];
        _newMovie.overview = desc;
        _newMovie.categoriesIds = movie[@"genre_ids"];
        _newMovie.posterPath = movie[@"poster_path"];
        _newMovie.categories = NSMutableArray.new;
        [movies addObject:_newMovie];
    }
    return movies;
}

+ (NSString*) genreName: (NSNumber*) genreId genresDic: (NSMutableArray*) genres {
    for(int i=0; i < genres.count; i++) {
        if(genreId == genres[i][@"id"]) {
            return genres[i][@"name"];
        }
    }
    return nil;
}

@end
