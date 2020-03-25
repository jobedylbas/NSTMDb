//
//  ViewModel.h
//  nsmoviedb
//
//  Created by Jobe Diego Dylbas dos Santos on 23/03/20.
//  Copyright © 2020 Jobe Diego Dylbas dos Santos. All rights reserved.
//

#ifndef ViewModel_h
#define ViewModel_h

#define KEY @"?api_key=fb61737ab2cdee1c07a947778f249e7d"
#define PREFIX_URL @"https://api.themoviedb.org/"
#define POPULAR_URL @"3/movie/popular"
#define NOWPLAYING_URL @"3/movie/now_playing"
#define POSTER_URL @"t/p/w185"
#define GENRE_URL @"3/genre/movie/list"


@interface ViewModel: NSObject

- (void) reqPopularMovies: (void (^)(NSMutableArray*, NSError *)) completionBlock;

- (void) reqNowPlayingMovies: (void (^)(NSMutableArray*, NSError *))completionBlock;

- (NSURL*) popularMoviesURL;

- (NSURL*) nowPlayingMoviesURL;

- (NSURL*) moviePosterURL: (NSString*) movieId;



@end

#endif /* ViewModel_h */
