//
//  Network.h
//  nsmoviedb
//
//  Created by Jobe Diego Dylbas dos Santos on 16/03/20.
//  Copyright © 2020 Jobe Diego Dylbas dos Santos. All rights reserved.
//

#ifndef Network_h
#define Network_h

@interface Network : NSObject

@property (strong, nonatomic) NSDictionary *response;
@property (strong, nonatomic) NSString *errorMessage;

- (void) reqPopularMovies;

- (void) reqNowPlayingMovies;

+ (void) makeRequest: (NSURL*) url completion:(void (^)(NSDictionary *, NSError *))completionBlock;

@end


#endif /* Network_h */
