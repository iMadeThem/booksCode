//
//  ICFSharedMoviesViewController.h
//  MyMovies
//
//  Created by Joe Keeley on 7/9/12.
//  Copyright (c) 2012 Explore Systems, Inc. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface ICFSharedMoviesViewController : UITableViewController
 <NSFetchedResultsControllerDelegate>

@property (retain, nonatomic) NSFetchedResultsController *fetchedResultsController;

@end
