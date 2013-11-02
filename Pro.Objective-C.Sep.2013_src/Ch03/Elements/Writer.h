//
//  Writer.h
//  Elements
//
//  Created by Keith Lee on 10/30/12.
//  Copyright (c) 2012 Keith Lee. All rights reserved.
//

#import <Foundation/Foundation.h>

@protocol Writer <NSObject>

- (void)write:(NSFileHandle *)file;

@end
