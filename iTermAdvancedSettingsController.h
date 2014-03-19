//
//  iTermAdvancedSettingsController.h
//  iTerm
//
//  Created by George Nachman on 3/18/14.
//
//

#import <Cocoa/Cocoa.h>

@interface iTermAdvancedSettingsController : NSObject <NSTableViewDataSource, NSTableViewDelegate>

// Don't call these methods directly. Instead, go through iTermAdvancedSettingsModel.
+ (BOOL)boolForIdentifier:(NSString*)identifier
             defaultValue:(BOOL)defaultValue
              description:(NSString*)description;

+ (int)intForIdentifier:(NSString *)identifier
           defaultValue:(int)defaultValue
            description:(NSString *)description;

+ (double)floatForIdentifier:(NSString *)identifier
                defaultValue:(int)defaultValue
                 description:(NSString *)description;


@end