from ABC import algorithm_utils
import os
import argparse

parser = argparse.ArgumentParser()
parser.add_argument('--data_dir', type=str)
parser.add_argument('--num_chunks', type=int)
args = parser.parse_args()

data_dir = args.data_dir

if __name__ == "__main__":
	data_dir = os.path.abspath(data_dir) + "/"
	print(data_dir)
	algorithm_utils.combine_population_pickles(data_dir, args.num_chunks)