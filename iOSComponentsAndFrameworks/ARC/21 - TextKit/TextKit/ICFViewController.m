//
//  ICFViewController.m
//  TextKit
//
//  Created by Kyle Richter on 7/13/13.
//  Copyright (c) 2013 Kyle Richter. All rights reserved.
//

#import "ICFViewController.h"
#import "ICFDynamicDetectionViewController.h"
#import "ICFHitDetectionViewController.h"
#import "ICFExculsionPathViewController.h"
#import "ICFContentHighligtingViewController.h"

@interface ICFViewController ()

@end

@implementation ICFViewController

- (void)viewDidLoad
{
    [super viewDidLoad];

    self.title = @"TextKit";
}

-(void)viewWillAppear:(BOOL)animated
{
    [super viewWillAppear: animated];
    
    [myTableView deselectRowAtIndexPath:[myTableView indexPathForSelectedRow] animated:YES];
    
}

- (void)didReceiveMemoryWarning
{
    [super didReceiveMemoryWarning];
    // Dispose of any resources that can be recreated.
}

- (NSInteger)tableView:(UITableView *)tableView numberOfRowsInSection:(NSInteger)section
{
    
    return 4;
}


- (UITableViewCell *)tableView:(UITableView *)tableView cellForRowAtIndexPath:(NSIndexPath *)indexPath
{
    UITableViewCell *cell = [tableView dequeueReusableCellWithIdentifier:@"cell"];
    
    if (cell == nil)
    {

        cell = [[UITableViewCell alloc] initWithStyle:UITableViewCellStyleSubtitle reuseIdentifier:@"cell"];
        cell.accessoryType = UITableViewCellAccessoryDisclosureIndicator;
    }
    
    
    switch ([indexPath row])
    {
        case 0:
            cell.textLabel.text = @"Dynamic Link Detection";
            break;
        case 1:
            cell.textLabel.text = @"Hit Detection";
            break;
        case 2:
            cell.textLabel.text = @"Content Specific Highlighting";
            break;
        case 3:
            cell.textLabel.text = @"Exculsion Paths";
            break;
        default:
            break;
    }
    
    
    return cell;
    
}

- (void)tableView:(UITableView *)tableView didSelectRowAtIndexPath:(NSIndexPath *)indexPath
{
    UIViewController *viewController = nil;
    
    switch ([indexPath row])
    {
        case 0:
            viewController = [[ICFDynamicDetectionViewController alloc] init];
            break;
        case 1:
            viewController = [[ICFHitDetectionViewController alloc] init];
            break;
        case 2:
            viewController = [[ICFContentHighligtingViewController alloc] init];
            break;
        case 3:
            viewController = [[ICFExculsionPathViewController alloc] init];
            break;

        default:
            break;
    }
    
    [self.navigationController pushViewController:viewController animated:YES];
    
}


@end
