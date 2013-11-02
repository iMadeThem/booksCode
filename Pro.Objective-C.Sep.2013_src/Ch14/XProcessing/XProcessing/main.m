//
//  main.m
//  XProcessing
//
//  Created by Keith Lee on 4/14/13.
//  Copyright (c) 2013 Keith Lee. All rights reserved.
//

#import <Foundation/Foundation.h>

int main(int argc, const char * argv[])
{
  @autoreleasepool
  {
    NSArray *words = @[@"Hello", @"Bonjour", @"Guten Tag", @"Hola"];
    @try
    {
      int index = 4;
      NSLog(@"Salutation = %@", words[index]);
    }
    @catch (NSException *exception)
    {
      NSLog(@"EXCEPTION\nName-> %@\nDescription-> %@", [exception name],
            [exception description]);
    }
  }
  return 0;
}

