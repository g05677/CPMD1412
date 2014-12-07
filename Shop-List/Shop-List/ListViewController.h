//
//  ListViewController.h
//  Shop-List
//
//  Created by David Jones on 12/6/14.
//  Copyright (c) 2014 David Jones. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <Parse/Parse.h>
#import <ParseUI/ParseUI.h>
#import "ViewController.h"

@interface ListViewController : UIViewController <UITableViewDelegate, UITableViewDataSource>
{
    IBOutlet UITableView *tableView;
    
    NSArray *itemArray;
    NSString *itemName;
    NSString *quantity;
}

@end
