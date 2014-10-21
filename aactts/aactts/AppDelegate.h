//
//  AppDelegate.h
//  aactts
//
//  Created by Byrdann Fox on 10/20/14.
//  Copyright (c) 2014 ExcepApps, Inc. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <CoreData/CoreData.h>

// ...
NSString *textViewValue;

@interface AppDelegate : UIResponder <UIApplicationDelegate>

@property (strong, nonatomic) UIWindow *window;

// context == playing table...
@property (readonly, strong, nonatomic) NSManagedObjectContext *managedObjectContext;
// model == schema for the database...
@property (readonly, strong, nonatomic) NSManagedObjectModel *managedObjectModel;
// coordinator == object that will help save the context to the disk...
@property (readonly, strong, nonatomic) NSPersistentStoreCoordinator *persistentStoreCoordinator;

- (void)saveContext;
- (NSURL *)applicationDocumentsDirectory;
- (void)coreDataShortcut;

@end