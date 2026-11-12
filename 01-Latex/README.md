# **LaTeX Documentation**

## 1.** Introduction**

LaTeX is a document preparation system widely used for creating professional and well-structured documents. It is particularly useful for academic papers, research articles, technical reports, books, and documents containing mathematical equations.
.

## 2. Basic Structure of a LaTeX Document

A basic LaTeX document consists of two main parts:

1. **Preamble:** Contains the document class and packages.
2. **Document body:** Contains the actual content of the document.

Example:

```latex
\documentclass[12pt,a4paper]{article}

\usepackage{amsmath}

\title{My First LaTeX Document}
\author{Student}
\date{\today}

\begin{document}

\maketitle

\section{Introduction}

This is my first LaTeX document.

\end{document}
```

## 4. Important LaTeX Commands

| Command | Purpose |
|---|---|
| `\documentclass{article}` | Defines document type |
| `\usepackage{}` | Includes additional packages |
| `\title{}` | Sets document title |
| `\author{}` | Specifies author |
| `\maketitle` | Displays title information |
| `\section{}` | Creates a section |
| `\subsection{}` | Creates a subsection |
| `\tableofcontents` | Generates a table of contents |
| `\textbf{}` | Makes text bold |
| `\textit{}` | Makes text italic |
| `\begin{document}` | Starts document content |
| `\end{document}` | Ends document content |

## 5. Lists in LaTeX

LaTeX supports different types of lists.

### Unordered List

The `itemize` environment creates bulleted lists.

```latex
\begin{itemize}
    \item LaTeX
    \item Beamer
    \item Doxygen
\end{itemize}
```

### Ordered List

The `enumerate` environment creates numbered lists.

```latex
\begin{enumerate}
    \item Introduction
    \item Document Structure
    \item Conclusion
\end{enumerate}
```

## 6. Mathematical Equations

One of the major advantages of LaTeX is its ability to typeset mathematical expressions.

Example:

```latex
\[
E = mc^2
\]
```

Another example:

```latex
\[
a^2 + b^2 = c^2
\]
```

The `amsmath` package provides additional mathematical formatting features.

## 7. Theorem Environments

LaTeX supports theorem-like environments using the `amsthm` package.

Example:

```latex
\usepackage{amsthm}

\newtheorem{theorem}{Theorem}

\begin{theorem}
The sum of two even integers is always even.
\end{theorem}
```

## 8. Bibliography and References

LaTeX supports references and bibliographies using packages such as `natbib`.

Example:

```latex
\usepackage{natbib}
```

The package provides commands for citing references in academic documents.



## 9. Advantages of LaTeX

- Produces high-quality professional documents.
- Provides excellent mathematical typesetting.
- Supports automatic numbering and references.
- Makes large documents easier to organize.
- Is widely used in scientific and academic publishing.

## 10. Conclusion

LaTeX is a powerful document preparation system for creating structured and professional technical documents. Through the practical exercises in this course, I learned how to write LaTeX code, format documents, insert equations, manage references, and generate PDF output.

Learning LaTeX has improved my understanding of technical documentation and academic writing.
