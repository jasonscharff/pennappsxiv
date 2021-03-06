//
//  NTENote.h
//  PennAppsXIV
//
//  Created by Jason Scharff on 9/10/16.
//  Copyright © 2016 Jason Scharff. All rights reserved.
//

#import <Foundation/Foundation.h>

@import UIKit;

@interface NTENote : NSObject

+ (instancetype)sharedNote;
- (void)setupWithDictionary : (NSDictionary *)dictionary;

@property (nonatomic) NSString *rawMarkdown;
@property (nonatomic) NSString *html;
    
@end
