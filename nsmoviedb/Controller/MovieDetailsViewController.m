//
//  MovieDetailsViewController.m
//  nsmoviedb
//
//  Created by Luiz Pedro Franciscatto Guerra on 17/03/20.
//  Copyright © 2020 Jobe Diego Dylbas dos Santos. All rights reserved.
//

#import "MovieDetailsViewController.h"
#import "MovieDBService.h"
#import "Movie.h"

@interface MovieDetailsViewController ()

@end

@implementation MovieDetailsViewController

- (void)viewDidLoad {
    [super viewDidLoad];
    MovieDBService *movieDBService = MovieDBService.new;
    [movieDBService getMovieGenre: self.movie handler:^(NSError *error) {
        if(error) {
            NSLog(@"%@", [error localizedDescription]);
        } else {
            [self setData];
        }
    }];
}

- (void)setData {
    if ([self movie] != nil) {
        self.posterImage.image = [UIImage imageWithData: self.movie.poster];
        self.posterImage.layer.cornerRadius = 10;
        [self movieTitle].text = [self movie].title;
        [self category].text = [self.movie.categories componentsJoinedByString:@", "];;
        [self rating].text = [self movie].score.stringValue;
        [self overview].text = [self movie].overview;
    }
}

@end
