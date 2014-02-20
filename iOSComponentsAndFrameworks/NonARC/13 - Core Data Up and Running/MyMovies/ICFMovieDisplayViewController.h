//
//  ICFMovieDisplayViewController.h
//  MyMovies
//
//  Created by Joe Keeley on 7/2/12.
//  Copyright (c) 2012 Explore Systems, Inc. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "ICFMovieEditViewController.h"

@interface ICFMovieDisplayViewController : UITableViewController <ICFMovieEditDelegate>

@property (retain, nonatomic) NSManagedObjectID *movieDetailID;
@property (retain, nonatomic) IBOutlet UILabel *movieTitleAndYearLabel;
@property (retain, nonatomic) IBOutlet UITextView *movieDescription;
@property (retain, nonatomic) IBOutlet UILabel *movieSharedInfoLabel;

@end
