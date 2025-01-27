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
#import "CustomCell.h"
#import "Reachability.h"

@interface ListViewController : UIViewController <UITableViewDataSource, UITableViewDelegate, UIAlertViewDelegate>
{
    IBOutlet UITableView *itemTable;
    IBOutlet UIBarButtonItem *backButton;
    
    NSArray *itemArray;
    NSString *itemName;
    NSString *quantity;
    NSNumber *qty;
    NSString *objId;
    
    PFObject *pObject;
}

-(BOOL)isConnected;

@end
