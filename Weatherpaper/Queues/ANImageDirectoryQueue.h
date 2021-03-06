//
//  ANImageQueue.h
//  Weatherpaper
//
//  Created by Alex Nichol on 1/3/14.
//  Copyright (c) 2014 Alex Nichol. All rights reserved.
//

#import "ANGeneralImageQueue.h"

@interface ANImageDirectoryQueue : NSObject <ANGeneralImageQueue>

@property (nonatomic, retain) NSString * baseDirectory;
@property (readonly) NSMutableArray * completed;

- (void)reloadDirectory;

@end
