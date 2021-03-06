//
//  RMDocument.h
//  RaiseMan
//
//  Created by thiago on 5/29/14.
//  Copyright (c) 2014 bignerdranch. All rights reserved.
//

#import <Cocoa/Cocoa.h>
#import "PreferenceController.h" // Use PreferenceController constants
@class Person;

@interface RMDocument : NSDocument

@property (nonatomic) NSMutableArray *employees;
@property (nonatomic) IBOutlet NSTableView *tableView;
@property (nonatomic) IBOutlet NSArrayController *employeeController;

- (void)insertObject:(Person *)employee
  inEmployeesAtIndex:(NSUInteger)index;
- (void)removeObjectFromEmployeesAtIndex:(NSUInteger)index;

- (IBAction)createEmployee:(id)sender;
- (IBAction)removeEmployee:(id)sender;

@end
